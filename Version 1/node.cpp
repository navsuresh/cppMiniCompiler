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
    return (this->get_line_no() < second.get_line_no());
}

//Abstract Syntax Tree
ast::ast() {}
void ast::insert(int line_no, string identifier, string type, string value, int size, int scope)
{
    if (tree.find(identifier) == tree.end())
    {
        tree[identifier] = set<node>();
    }
    tree[identifier].insert(node(line_no, identifier, type, value, size, scope));
}

void ast::insert(node _node)
{
    string identifier = _node.get_identifier();
    if (tree.find(identifier) == tree.end())
    {
        tree[identifier] = set<node>();
    }
    tree[identifier].insert(_node);
}

void ast::display()
{
    for (auto &it : tree)
    {
        for (auto &it1 : it.second)
        {
            it1.disp_node();
        }
        cout << "\n";
    }
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