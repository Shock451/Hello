#! /usr/bin/env php

function sayHello($input){
	echo("hello, " . $input);
}

sayHello(readline("Hi, What's your name?"));
