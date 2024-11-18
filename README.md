# Lorem Ipsum
An Arduino lorem ipsum generator, perhaps useful for testing your own code that works with text, messages and so on.

Simply use...

```C++
loremipsum.sentence(<number of words>)		//Defaults to 7-12 if not specified
loremipsum.paragraph(<number of sentences>)	//Defaults to 3-8 if not specified
```

...to return a String of words with terminating punctuation.

Generation of this is not efficient as it's all Strings, pull requests are welcome :-).
