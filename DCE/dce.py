import os
from nltk.tokenize import word_tokenize
from collections import Counter
import sys
import re




def process(icg,label):
	all_tokens=[]
	for i in range(len(icg)):
		all_tokens+=icg[i]
	keywords={'not','if','goto',':','=','<','>'	}.union(label)
	for i in range(len(all_tokens)):
		if(all_tokens[i].isdigit()==1):
			all_tokens[i]=':'

	for i in keywords:
		while(i in all_tokens):
			all_tokens.remove(i)

	counts=dict(Counter(all_tokens))
	if(len(list(counts.values()))==0 or min(list(counts.values()))>1):
		return None
	return counts

def remove(icg,count_tokens,label):
	keywords={'not','if','goto',':','=','<','>'	}.union(label)
	
	for i in range(len(icg)):
		remove=0
		for j in icg[i]:
			if(j in keywords):
				pass
			elif(j not in keywords and j.isdigit()==0 and  count_tokens[j]<=1):
				remove=1
		if(remove):
			icg[i]=[]
	while([] in icg):
		icg.remove([])
	return icg
def all_labels(icg):
	labels=[]
	for i in icg:
		if(':' in i):
			labels.append(' '.join(i[:i.index(':')]))
	return list(set(labels))


fp=open(sys.argv[1],'r')
icg=fp.read()
fp.close()
icg=re.sub('\n+','\n',icg)
icg=re.sub(' +',' ',icg)
icg=icg.split('\n')
flag=0
for i in range(len(icg)):
	icg[i]=icg[i].strip()
	if('#include' in icg[i]):
		icg[i]=' '
	elif('unsuccessful' in icg[i]):
		flag=1
		icg[i]=' '
	elif('successful' in icg[i]):
		flag=0
		icg[i]=' '
icg='\n'.join(icg)
icg=re.sub('\n+','\n',icg)
icg=re.sub(' +',' ',icg)
icg=icg.split('\n')


if(flag==1):
	print('Unsuccessful parsing. No Dead code can be done')
else:
	
	for i in range(len(icg)):
		icg[i]=icg[i].split()
	label=all_labels(icg)
	symbols=dict()
	break_flag=1
	while(break_flag):
		k=process(icg,label)
		if(k==None):
			break_flag=0
		else:
			icg=remove(icg,k,label)
	for i in range(len(icg)):
		icg[i]=' '.join(icg[i])
	print('\n'.join(icg))
		