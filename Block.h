/*Block.h*/
#include <cstdint>
#include <iostream>
#include <sstream>

using namespace std;

class Block{
public:
	// Hash value of the previous block
	/* 	Each block is connected to the previous block
		by a hash crypto function
	*/
	
	string sPrevHash;

	/* Block constructor
	   uint32_t unsigned integer 0 to 2 power 32 
	   Takea a string argument reference
	   uint32_t nIndexIn is the block index number in the chain.
	   &DataIn is & reference const so that is cannot be changed
	*/
	Block(uint32_t nIndexIn, const string &sDataIn);

	/* 	GetHash() and MineBlock() specified in the .h
		MineBlock takes the nDifficulty argument.*/
	string GetHash();
	void MineBlock(uint32_t nDifficulty);

	/*
		Private block data, not accessible outside publically
	*/
private:
	uint32_t _nIndex;
	int64_t  _nNonce;
	string   _sData;
	string   _sHash;
	time_t 	 _tTime;

	string _CalculateHash() const;

};
// End of class Block