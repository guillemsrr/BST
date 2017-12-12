// BST.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "AA1_A08_BST.hpp"


int main()
{
	BST m_BST;

	for(int i=0;i<=9;i++){
		m_BST.Insert(i);
	}

	m_BST.PostOrder();
	std::cout << std::endl;
	m_BST.PreOrder();
	std::cout << std::endl;

	std::cout<<m_BST.Search(5);
	
	

    return 0;
}

