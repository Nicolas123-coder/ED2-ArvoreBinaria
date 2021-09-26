//Nome: Nicolas de Barros
//TIA: 32070837

//Nome: Domingos Soares do Carmo Neto
//TIA: 32032889

#ifndef __NODE_H__
#define __NODE_H__

#include <string>

class Node 
{
public:
	Node();
	~Node();

	std::string GetData() const;
	void SetData(const std::string& data);

	Node* GetParent() const;
	void SetParent(Node* parent);

	Node* GetLeft() const;
	void SetLeft(Node* left);

	Node* GetRight() const;
	void SetRight(Node* right);

	bool isRoot() const;
	bool isLeaf() const;

	int GetDegree() const;
	int GetLevel() const;
	int GetHeight() const;

private:
	std::string data;

	Node* parent;

	Node* left;
	Node* right;

	int GetHeightInternal(const Node* node, int h) const;
};

#endif __NODE_H__