//Nome: Nicolas de Barros
//TIA: 32070837

//Nome: Domingos Soares do Carmo Neto
//TIA: 32032889

#include "Node.h"

Node::Node()
	: data("")
	, parent(nullptr)
	, left(nullptr)
	, right(nullptr)
{
}

Node::~Node() 
{
	parent = nullptr;
	left = nullptr;
	right = nullptr;
}

std::string Node::GetData() const 
{
	return data;
}

void Node::SetData(const std::string& data) 
{
	this->data = data;
}

Node* Node::GetParent() const 
{
	return parent;
}

void Node::SetParent(Node* parent) 
{
	this->parent = parent;
}

Node* Node::GetLeft() const 
{
	return left;
}

void Node::SetLeft(Node* left) 
{
	this->left = left;
}

Node* Node::GetRight() const 
{
	return right;
}

void Node::SetRight(Node* right) 
{
	this->right = right;
}

bool Node::isRoot() const 
{
	if (parent == nullptr)
		return true;
	else
		return false;
}

bool Node::isLeaf() const 
{
	if (parent != nullptr && left == nullptr && right == nullptr) return true;
	else return false;
}

int Node::GetDegree() const
{
	if (left == nullptr && right == nullptr)  return 0; 

	else if ((left == nullptr && right != nullptr) || (left != nullptr && right == nullptr))  return 1;

	else return 2; 
}

int Node::GetLevel() const
{
	int level = 0;
	Node* node = parent;
	while (!(node == nullptr))
	{
		node = node->GetParent();
		level++;
	}
	return level;
}

int Node::GetHeight() const 
{
	int H = -1;

	return GetHeightInternal(this, H);
}

int Node::GetHeightInternal(const Node* node, int heigh) const 
{
	if (node == nullptr) 
	{
		return heigh;
	}

	else 
	{
		heigh++;
		int left = GetHeightInternal(node->GetLeft(), heigh);
		int right = GetHeightInternal(node->GetRight(), heigh);

		if (left > right) return left;
		
		else return right;
	}
}