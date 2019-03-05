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
    node();
    node(int line_no, string identifier, string type, string value);
    node(const node &copy_node);
    
    int get_line_no() const;
    string get_identifier() const;
    string get_type() const;
    string get_value() const;

    void set_line_no(int line_no);
    void set_identifier(string identifier);
    void set_type(string type);
    void set_value(string value);
    
    void disp_node() const;
    bool operator<(const node &d) const;
};

class ast : public node
{
    unordered_map<string, set<node>> tree;

  public:
    ast();
    void insert(int line_no, string identifier, string type, string value);
    void insert(node _node);
    void display();
};