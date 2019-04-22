#include <string>
#include <unordered_map>
#include <set>
#include <vector>
using namespace std;

class node
{
  int line_no;
  string identifier;
  string type;
  string value;
  int size;
  int scope;

public:
  //Constructors
  node();
  node(int line_no, string identifier, string type, string value, int size, int scope);
  node(int line_no, string identifier, string type, string value, string size, int scope);
  node(const node &copy_node);

  //Getters
  int get_line_no() const;
  string get_identifier() const;
  string get_type() const;
  string get_value() const;
  int get_size() const;
  int get_scope() const;
  //Setters
  void set_line_no(int line_no);
  void set_identifier(string identifier);
  void set_type(string type);
  void set_value(string value);
  void set_size(int size);
  void set_scope(int scope);
  //Displays all attributes
  void disp_node() const;

  //Used for ordering in set
  bool operator<(const node &d) const;
};

class ast : public node
{
  //Abstract syntax tree is a hashmap. The key is the identifier. The value is a set(tree) with comparison done based on line number. Should be useful to find scope, by going to the closest line number which is lesser than the required line.
  vector<vector<unordered_map<string, node>>> tree;

public:
  //Default constructor
  ast();
  //Overloaded insert functions, inserts into the hashmap.
  void create_map(int scope);
  void insert(int line_no, string identifier, string type, string value, int size, int scope);
  void insert(node _node);
  // void identifier_exists(int line_no, string identifier, int scope);
  int declaration_exists(int line_no, string identifier, int scope);
  //Displays based on identi`fier, and the corresponding sorted line numbers.
  void display();
};

char *conversion(vector<string> vec_s);