#include "node.hpp"
#include <string>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

//Node
node::node() {}

node::node(int line_no, string identifier, string type, string value, int size, int scope) : line_no(line_no), identifier(identifier), type(type), value(value), size(size), scope(scope) {}

node::node(int line_no, string identifier, string type, string value, string size, int scope) : line_no(line_no), identifier(identifier), type(type), value(value), size(stoi(size)), scope(scope) {}

node::node(const node &copy_node) : line_no(copy_node.line_no), identifier(copy_node.identifier), type(copy_node.type), value(copy_node.value), size(copy_node.size), scope(copy_node.scope) {}

int node::get_line_no() const
{
    return line_no;
}

string node::get_identifier() const
{
    return identifier;
}

string node::get_type() const
{
    return type;
}

string node::get_value() const
{
    return value;
}

int node::get_size() const
{
    return size;
}

int node::get_scope() const
{
    return scope;
}

void node::set_scope(int scope)
{
    this->scope = scope;
}
void node::set_line_no(int line_no)
{
    this->line_no = line_no;
}
void node::set_identifier(string identifier)
{
    this->identifier = identifier;
}
void node::set_type(string type)
{
    this->type = type;
}
void node::set_value(string value)
{
    this->value = value;
}
void node::set_size(int size)
{
    this->size = size;
}

void node::disp_node() const
{
    cout << "line_no is " << this->line_no << "\n";
    cout << "identifier is " << this->identifier << "\n";
    cout << "type is " << this->type << "\n";
    cout << "value is " << this->value << "\n";
    cout << "Size is " << this->size << "\n";
    cout << "Scope is " << this->scope << "\n";

    cout << "\n";
}

bool node::operator<(const node &second) const
{

    if (this->get_scope() == second.get_scope())
        return this->get_line_no() < second.get_line_no();

    return this->get_scope() < second.get_scope();
}

//Abstract Syntax Tree
ast::ast()
{
    vector<unordered_map<string, node>> temp;
    tree.push_back(temp);
    unordered_map<string, node> temp1;
    tree[0].push_back(temp1);
}
void ast::create_map(int scope)
{
    if (scope >= tree.size())
    {
        vector<unordered_map<string, node>> temp;
        tree.push_back(temp);
    }
    unordered_map<string, node> temp1;
    tree[scope].push_back(temp1);
    return;
}
void ast::insert(int line_no, string identifier, string type, string value, int size, int scope)
{
    unordered_map<string, node> &temp = tree[scope].back();
    temp[identifier] = node(line_no, identifier, type, value, size, scope);
}

void ast::insert(node _node)
{
    string identifier = _node.get_identifier();
    int scope = _node.get_scope();

    unordered_map<string, node> &temp = tree[scope].back();
    temp[identifier] = _node;
}

void ast::display()
{

    for (int i = 0; i < tree.size(); i++)
    {
        cout << "BIG Scope is " << i << "\n";
        for (int j = 0; j < tree[i].size(); j++)
        {
            for (auto &it1 : tree[i][j])
            {
                it1.second.disp_node();
            }
        }
        cout << "\n";
    }
}

// void ast::identifier_exists(int line_no, string identifier, int scope)
// {
// if(tree.find(identifier)==tree.end()){
//     cout<<"Identifier Doesn't Exist\n";
//     return;
// }
// // auto set_iterator = tree.find(identifier)->second;
// // auto set_iterator = *temp1;
// auto set_iterator = tree[identifier];
// node temp_node;
// temp_node.set_line_no(line_no);
// temp_node.set_identifier(identifier);

// for(auto i:set_iterator){
//     i.disp_node();
// }
// auto set_element_iterator = set_iterator.lower_bound(temp_node);
// if(set_element_iterator == set_iterator.begin()){
//     if()
// }
// cout<<"NERE\n";
// set_element_iterator->disp_node();
// auto temp_
// }

int ast::declaration_exists(string identifier, int scope)
{
    // cout<<"INSIDE FUNCTIOn\n";

    // n is scope
    int n = scope;
    while (n >= 0)
    {
        unordered_map<string, node> &temp = tree[n].back();
        if (temp.find(identifier) != temp.end())
        {
            return 1;
        }
        n--;
    }
    return 0;
}


bool ast::update_identifier(string identifier, int scope, string value)
{
    // cout<<"INSIDE FUNCTIOn\n";

    // n is scope
    int n = scope;
    while (n >= 0)
    {
        unordered_map<string, node> &temp = tree[n].back();
        if (temp.find(identifier) != temp.end())
        {
            temp[identifier].set_value(value);
            return 1;
        }
        n--;
    }
    return 0;
}



int ast::declaration_exists_scope(string identifier, int scope)
{
    // cout<<"INSIDE FUNCTIOn\n";

    // n is scope

    unordered_map<string, node> &temp = tree[scope].back();
    if (temp.find(identifier) != temp.end())
    {
        return 1;
    }
    return 0;
}

char* ast::identifier_value(string identifier, int scope)
{
    // cout<<"INSIDE FUNCTIOn\n";

    // n is scope
    int n = scope;
    while (n >= 0)
    {
        unordered_map<string, node> &temp = tree[n].back();
        if (temp.find(identifier) != temp.end())
        {
            vector <string> temp1{temp[identifier].get_value()};
            return conversion(temp1);
            // return 1;
        }
        n--;
    }
    char* temp1= new char[2];
    temp1[0]='0';
    temp1[1]='\0';
    return temp1;
}

char *conversion(vector<string> vec_s)
{
    for (auto &i : vec_s)
    {
        cout << i << "\n";
    }

    string temp;
    for (auto &i : vec_s)
    {
        cout << i << "\n";
        temp += i;
    }

    char *writable = new char[temp.size() + 1];
    std::copy(temp.begin(), temp.end(), writable);
    writable[temp.size()] = '\0'; // don't forget the terminating 0
    return writable;
}