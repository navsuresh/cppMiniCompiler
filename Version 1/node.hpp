#include <string>
#include <unordered_map>
#include <set>
using namespace std;

class node
{
  int line_no;
  string identifier;
  string type;
  string value;

public:
  //Constructors
  node();
  node(int line_no, string identifier, string type, string value);
  node(const node &copy_node);

  //Getters
  int get_line_no() const;
  string get_identifier() const;
  string get_type() const;
  string get_value() const;

  //Setters
  void set_line_no(int line_no);
  void set_identifier(string identifier);
  void set_type(string type);
  void set_value(string value);

  //Displays all attributes
  void disp_node() const;
  //Used for ordering in set
  bool operator<(const node &d) const;
};

class ast : public node
{
  //Abstract syntax tree is a hashmap. The key is the identifier. The value is a set(tree) with comparison done based on line number. Should be useful to find scope, by going to the closest line number which is lesser than the required line.
  unordered_map<string, set<node>> tree;

public:
  //Default constructor
  ast();
  //Overloaded insert functions, inserts into the hashmap.
  void insert(int line_no, string identifier, string type, string value);
  void insert(node _node);
  //Displays based on identifier, and the corresponding sorted line numbers.
  void display();
};