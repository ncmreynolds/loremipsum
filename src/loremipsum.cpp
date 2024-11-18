/*
 *	An Arduino library for Lorem Ipsum generation
 *
 *	https://github.com/ncmreynolds/loremipsum
 *
 *	Released under LGPL-2.1 see https://github.com/ncmreynolds/loremipsum/LICENSE for full license
 *
 */
#ifndef loremipsum_cpp
#define loremipsum_cpp
#include "loremipsum.h"

loremipsumClass::loremipsumClass()	//Constructor function
{
}

loremipsumClass::~loremipsumClass()	//Destructor function
{
}

String loremipsumClass::paragraph(uint16_t sentenceCount)
{
	if(sentenceCount == 0)
	{
		sentenceCount = random(2,8);
	}
	String tempString = sentence(random(5,12));						//Get the first sentence
	tempString += " ";												//Add a space
	for(int i = 0; i < sentenceCount - 1 ; i++)						//Iterate through
	{
		tempString += sentence(random(5,12));						//Add a sentence
		if(i < sentenceCount - 2)									//Skip the last sentence
		{
			tempString += " ";										//Add a space
		}
	}
	return(tempString);												//Return the paragraph
}

String loremipsumClass::sentence(uint16_t wordCount)
{
	if(wordCount == 0)
	{
		wordCount = random(6,12);
	}
	String tempString = _randomLatinWord();							//Get the first word
	tempString.setCharAt(0, toupper(tempString.charAt(0)));			//Capitalise it
	tempString += " ";												//Add a space
	for(int i = 0; i < wordCount - 1 ; i++)							//Iterate through
	{
		tempString += _randomLatinWord();							//Add a random word
		if(i < wordCount - 2)										//Skip the last word
		{
			tempString += " ";										//Add a space
		}
	}
	tempString += _randomLatinEnding();								//Add an ending
	return(tempString);												//Return the sentence
}
String loremipsumClass::_randomLatinEnding()
{
	return (String(_latinEndings[random(0,34)]));					//Return a random ending
}

String loremipsumClass::_randomLatinWord()							//Retrun a random word
{
	return (String(_latin[random(0,478)]));
}

loremipsumClass loremipsum;	//Create an instance of the class, as only one is practically usable at a time
#endif
