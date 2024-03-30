#include <iostream>
#include <string>

void concat_string(){

	//Concatenating two strings : The + operator
    /*
	std::cout << std::endl;
	std::cout << "Concatenating two strings : " << std::endl;

	std::string str1{"Hello"};
	std::string str2{"World"};

	std::string message = str1 + " my " + str2;
        
	std::cout << "message : " << message << std::endl;
    */

	//Concatenating string literals : No, No - Compiler Error
	//String literals are expanded into const char* arrays and C++ doesn't know
	//how to add arrays with the + operator. Hence the compiler error.
    /*
	std::cout << std::endl;
	std::cout << "Concatenating string literals : No,No! Compiler Error " << std::endl;
	
	//std::string str3 { "Hello" + "World"}; // Compiler Error
	//std::string str4 = "Hello" + "World";  // Compiler Error
    */

	//A few ways around string literal concatenation
    /*
	std::cout << std::endl;
	std::cout << "A few ways around string literal concatenation" << std::endl;
            
	std::string str5 {"Hello World"}; 	// Make the string one literal
										//in the first place
	std::string str6 {"Hello" " World"};// Put the literals side by side
										//without the + in between
	std::string str7{std::string{"Hello"} + " World"};//Turn one or both into a std::string
													 //object  and do the concatenation
	std::cout << "str5 : " << str5 << std::endl;
	std::cout << "str6 : " << str6 << std::endl;
	std::cout << "str7 : " << str7 << std::endl;
                                                     
	using namespace std::string_literals; // necessary for the s suffix
										  // This polutes the namespace in main
	std::string str8 {"Hello"s + " World"};// Turn one or both into strings using the 
                                    //s suffix . the string_literals namespace has to be imported
                                    //for this to work
	std::cout << "str8 : " << str8 << std::endl;
									
	//A better way to not polute the namespace
	std::string str9;
	{
		using namespace std::string_literals;
		str9 = "Hello"s + " World";
	}
	std::cout << "str9 : " << str9 << std::endl;
    */


	//std::string is a compound type, it has properties and behaviors
	//one of the behaviors is append. We access the behaviors using
	//the . operator after the std::string variable name
    /*
	std::cout << std::endl;
	std::cout << "Using the append method : " << std::endl;
	std::string str10 {"Hello"};
	std::string str11 {" World"};
	std::string str12 = str10.append(str11);
	std::cout << "str12 : " << str12 << std::endl;
        
	std::string str13{std::string{"Hello"}.append(" World")};
	std::cout << "str13 : " << str13 << std::endl;
    */


	//Append can do more than the + operator
	//The + operator is just a convenience for basic concatenation
    /*
	std::cout << std::endl;
	std::cout << "Append method can do more than + operator : " << std::endl;
	std::string str14 {"Hello "};
	std::string str15 {str14.append(5,'?')}; // Appends 5 '?' characters
	std::cout << "str15 : " << str15 << std::endl;
		
		
	std::string str16{"The world is our shared home."};
	std::string str17{"Hello "};
	std::string str18{str17.append(str16,4,5)};// Append a sub-section of another string
												// starting from index 4 , 5 characters
	std::cout << "str18 : " << str18 << std::endl;
	
	//Direct output
	std::string str19{"Hello "};
	std::cout << "Direct output : " << str19.append(str16,4,5) << std::endl;
    */


	//Concatenating strings and characters
    /*
	std::cout << std::endl;
	std::cout << "Concatenating strings and characters : " << std::endl;
	std::string str20 {"Hello"};
	std::string str21 {"World"};
	std::string str22 {str20 + ' ' + str21};// The space in between is a character
	std::cout << "str22 : " << str22 << std::endl;

	std::string str23 = "Hello";
	(str23 += ',') += ' ';
	std::cout << "str23 : " << str23 << std::endl;

	//Another solution
	std::string str24 = "Hello"; // Take out the , and space we added before.
	std::string str25 {"I am here to see you."};
	std::string str26 {str24 + ',' + ' ' + str25};
	std::cout << "str26 : " << str26 << std::endl;
    */


	//Appending C-strings and char arrays
    /*
	std::cout << std::endl;
	std::cout << "Appending C-Strings and char arrays : "<<std::endl;
	const char message1[] {"World"};
	const char * message2 {"World"};
        
	std::cout <<" + char array : "  <<  std::string{"Hello "} + message1 << std::endl;
	std::cout <<" + C-String : "  <<  std::string{"Hello "} + message2 << std::endl;
	std::cout <<"append char array : "  <<  std::string{"Hello "}.append(message1) << std::endl;
	std::cout <<"append C-String : "  <<  std::string{"Hello "}.append( message2)<< std::endl;
	*/

    //Concatenating std::strings and numbers
        
	// std::string str26{"Hello"};
        
	// str26 += std::to_string(67.5f); // Treats 67 as a character code
	// 				// When using the += operator, C++ knows to treat the 
	// 				//integer operand as a character code and append that to our
	// 				//std::string. But what if we want the 67 appended to std::string
	// 				//literally
    // std::cout << "str26 : " << str26 << std::endl;


}

void accessing_characters(){

    /*
    std::string str1 {"Hello there"};
	
	//Size of a string : doesn't count the null terminator
	std::cout << "str1.size() : " << str1.size() << std::endl;
    
    //Reading characters in std::string : array index operator
    //Regular indexed loop. Can also be adapted to use while and do-while
	//This is left as an exercise.
    std::cout << std::endl;
    std::cout << "For loop with array index notation : "<< std::endl;
	
	std::cout << "str1(for loop) : " ;
    for(size_t i{}; i < str1.size(); ++i){
        std::cout << " " << str1[i] ;
    }
	std::cout << std::endl;
    */

    //Can also use range based for loop
    /*
    std::string str1 {"Hello there"};
    std::cout << std::endl;
    std::cout << "Using range based for loop : "<< std::endl;
	
	std::cout << "str1(range based for loop) : " ;
    for(char value : str1){
        std::cout << " " << value ;
    }
	std::cout << std::endl;
    */

   //at() syntax to target characters
   /*
    std::cout << std::endl;
    std::cout << "Using the std::string::at() method : "<< std::endl;

    std::string str1 {"Hello there"};
	std::cout << "str1 : (for loop with at()) : " ;

    for(size_t i{}; i < str1.size(); ++i){
        std::cout << " " << str1.at(i) ;
    }
	std::cout << std::endl;
    */

    //Modifying with operator[] and at()
    /*
    std::string str1 {"Hello there"};
    str1[0] = 'B';
    str1.at(1) = 'a';
    std::cout << "str1(modified) : " << str1 << std::endl;
    */

    //Getting the front and back characters
    /*
    std::string str2{"The Phoenix King"};    
    char& front_char = str2.front();
    char& back_char = str2.back();
    std::cout << "The front char in str2 is : " << front_char << std::endl;
    std::cout << "The back char in str2 is : " << back_char << std::endl;

    front_char = 'r';
    back_char = 'd';

    std::cout << "str2 : " << str2 << std::endl;
    */


	//c_str method
    /*
	//doc : https://en.cppreference.com/w/cpp/string/basic_string/c_str
	//returns const char * to the wrapped string. You shouldn't use 
	//it to modify data in the string.
    std::string str2{"The Phoenix King"}; 
    const char * wrapped_c_string = str2.c_str();
    std::cout << "Wrapped c string : " << wrapped_c_string << std::endl;
    //wrapped_c_string[0] = 'e'; // Compiler error
    */

   //data()
    std::string str2 { "Hello World"};
    
    char * data = str2.data();
    std::cout << "Wrapped c string : " << data << std::endl;
    
    data[0] = 'B';// This also changes std::string.
    
    std::cout << "Wrapped c string (after modification) : " << data << std::endl;
    std::cout << "Original string (after modification ) :" << str2 << std::endl;

}

void string_size(){

    /*
    std::string str1 {"Hello World"};
    std::string str2;
    std::string str3{};
    
    //Empty
    std::cout << std::endl;
    std::cout << "std::string::empty() : " << std::endl;
    std::cout << "str1 is empty : " << std::boolalpha << str1.empty() << std::endl;
    std::cout << "str2 is empty : " << std::boolalpha << str2.empty() << std::endl;
    std::cout << "str3 is empty : " << std::boolalpha << str3.empty() << std::endl;

    //Size
    std::cout << std::endl;
    std::cout << "std::string::size() : " << std::endl;
    std::cout << "str1 contains " << str1.size() << " characters" << std::endl; //11
    std::cout << "str2 contains " << str2.size() << " characters" << std::endl; // 0
    std::cout << "str3 contains " << str3.size() << " characters" << std::endl; // 0

   //Length
    std::cout << std::endl;
    std::cout << "std::string::length() : " << std::endl;
    std::cout << "str1 contains " << str1.length() << " characters" << std::endl; //11
    std::cout << "str2 contains " << str2.length() << " characters" << std::endl; // 0
    std::cout << "str3 contains " << str3.length() << " characters" << std::endl; // 0
    */

    //max_size : max number of characters a string can have on the system
    /*
	//Prints : 2147483647 on my system
    std::string str1 {"Hello World"};
    std::cout << "std::string can hold " << str1.max_size() << " characters" << std::endl;
    */


    //Capacity
    /*
    std::string str1 {"Hello World"};
    std::string str2;
    std::cout << "str1 capacity : " << str1.capacity() << std::endl;
	std::cout << "str2 capacity : " << str2.capacity() << std::endl;
	
	str1 = "The sky is so blue, the grass is green. Kids are running all over the place";
	
    std::cout << "str1 size : " << str1.size() << std::endl;
	std::cout << "str1 capacity : " << str1.capacity() << std::endl;
    */

    //Reserve : Update the capacity
    /*
    std::string str1 {"Hello World"};
	std::cout << "str1 capacity : " << str1.capacity() << std::endl; // 15
	std::cout << "str1 size : " << str1.size() << std::endl;

    str1.reserve(100);
    
    std::cout << "str1 after reserve : " << str1 << std::endl; 
	std::cout << "str1 capacity : " << str1.capacity() << std::endl; // 100
	std::cout << "str1 size : " << str1.size() << std::endl;
    */


    //shrink_to_fit
    std::string str1 {"Hello World"}; // 11
    str1.reserve(100);

	std::cout << "str1 capacity : " << str1.capacity() << std::endl; //100
	std::cout << "str1 size : " << str1.size() << std::endl; // 11

	str1.shrink_to_fit();
 
	std::cout << "str1 capacity : " << str1.capacity() << std::endl; //11
	std::cout << "str1 size : " << str1.size() << std::endl;//11

}

void modify_string(){

     //Clear : Removes all characters from the string.
     /*
    std::string str1 {"The Lion Dad"};
    
    std::cout << "str1 is : " << str1 << std::endl;
    std::cout << "str1 size : " << str1.size() << std::endl;
    std::cout << "str1 capacity : " << str1.capacity() << std::endl;
    
    str1.clear();

	std::cout << std::endl;
    std::cout << "str1 is : " << str1 << std::endl;
    std::cout << "str1 size : " << str1.size() << std::endl;
    std::cout << "str1 capacity : " << str1.capacity() << std::endl;
    */

    //Insert (1)
	//(1)basic_string& insert( size_type index, size_type count, CharT ch );
	//Inserts count characters in the string starting at index index
    /*
    std::string str2 {"122"};
    std::cout << "str2 : " << str2 << std::endl;
    
    str2.insert(1,4,'3');//Count can be 1,2,5,..
	
	std::cout << std::endl;
    std::cout << "str2 : " << str2 << std::endl;//1322
    */

	//Insert (2)
    //(2)basic_string& insert( size_type index, const CharT* s );
    //Inserts null-terminated character string pointed to by s
    //at the position index. The length of the string is determined 
    //by the first null character.
	/*
    std::string str3 {"Hello!"};
    const char * txt3{" World"};
	
	std::cout << "str3 : " << str3 << std::endl;//Hello
	
    str3.insert(5,txt3);
	
    std::cout << std::endl;
    std::cout << "str3 : " << str3 << std::endl;//Hello World!
    */


	//Insert (3)
    //(3)basic_string& insert( size_type index, const CharT* s, size_type count );
    //Inserts the characters in the range [s, s+count) at the position index.
    //The range can contain null characters.
	/*
	std::string str4{"Hello!"};
    const char * txt4{" World Health Organization"};
	
	std::cout << "str4 : " << str4 << std::endl;

    str4.insert(5,txt4,6);
	
    std::cout << std::endl;
    std::cout << "str4 : " << str4 << std::endl;
    */


	//Insert (4)
    //(4)basic_string& insert( size_type index, const basic_string& str );
    //Inserts string str at the position index
	/*
	std::string str5{" World"};
    std::string str6{"Hello!"};
	
	std::cout << "str6 : " << str6 << std::endl;

    str6.insert(5,str5);
	
    std::cout << std::endl;
    std::cout << "str6 : " << str6 << std::endl;
    */


	//Insert (5)
    //(5)basic_string& insert( size_type index, const basic_string& str,
    //                  size_type index_str, size_type count = npos);
    //Inserts a string, obtained by str.substr(index_str, count) at the position index
	/*
	std::string str7{"Hello!"};
    std::string str8{"Statistical Analysis of the World Population."};
	
	std::cout << "str7 : " << str7 << std::endl;

    str7.insert(5,str8,27,6);
	
    std::cout << std::endl;
    std::cout << "str7 : " << str7 << std::endl;
    */


    //Erase
    //basic_string& erase( size_type index = 0, size_type count = npos );
	//Starting at index index, erase count characters from the string
    //Notice that this function returns a referennce
    /*
    std::string str9 {"Hello World is a message used to start off things when learning programming!"};;
    
    str9.erase(11,str9.size() - 12);
	std::cout << "str9 : " << str9 << std::endl;
	
	//Reset str9.
	str9 = "Hello World is a message used to start off things when learning programming!";
	
	//Direct print out.Because this method returns a reference to the modified string
	std::cout << "str9 : " << str9.erase(11,str9.size() - 12) << std::endl;

    */


    //push_back
    //void push_back( CharT ch );
	//Appends the given character ch to the end of the string. 
    std::string str10 {"Hello World"};
    str10.push_back('!');
    std::cout << "str10 : " << str10 << std::endl;
	

    //pop_back
    //void pop_back();
	//Removes the last character from the string. 
    std::string str11 {"Hello World!!"};
    str11.pop_back();
    std::cout << "str11 : " << str11 << std::endl;
}

void comparing_strings(){
	std::string hello_str{"Hello"};
    std::string bello_str{"Bello"};
    
    /*
	//Using the comparison operators
	std::cout << std::endl;
	std::cout << "Comparing with comparison operators : " << std::endl;
	
	std::cout << std::boolalpha;
    std::cout << hello_str << "==" <<  bello_str <<" : " << (hello_str == bello_str) << std::endl;//false
    std::cout << hello_str << "!=" <<  bello_str <<" : " << (hello_str != bello_str) << std::endl; //true
    std::cout << hello_str << ">" <<  bello_str <<" : " << (hello_str > bello_str) << std::endl; // true
    std::cout << hello_str << ">=" <<  bello_str <<" : " << (hello_str >= bello_str) << std::endl; // true
    std::cout << hello_str << "<" <<  bello_str <<" : " << (hello_str < bello_str) << std::endl; // false
    std::cout << hello_str << "<=" <<  bello_str <<" : " << (hello_str <= bello_str) << std::endl; // false

    */

	//Can even compare std::strings to C-strings
    /*
    const char * c_string1 {"Bello"};
    hello_str = "Hello";
    
    std::cout << "hello_str.size() : " << hello_str.size() << std::endl;
    std::cout << "std::strlen(c_string1) : " << std::strlen(c_string1) << std::endl;
    std::cout << hello_str << "==" <<  c_string1 <<" (C-String) : " << (hello_str == c_string1) << std::endl; //false
    std::cout << c_string1 << " (C-String) ==" <<  hello_str <<" : " << (c_string1 == hello_str) << std::endl;//false
	std::cout << c_string1 << " (C-String) >=" <<  hello_str <<" : " << (c_string1 >= hello_str) << std::endl;//false
	std::cout << c_string1 << " (C-String) <" <<  hello_str <<" : " << (c_string1 < hello_str) << std::endl; // true
	*/


	//Be careful about char arrays not terminated with null character
    hello_str = "hello";
	//const char hello_char_array[] {'h','e','l','l','o'}; //The compiler is going to read past the string
														   //until it sees a null character and consider that
														   //end of the string. Your comparisons may give 
														   //erronous results
	
	const char hello_char_array[] {'h','e','l','l','o','\0'};//It works right if you put the '\' yourself
	std::cout << hello_str << "== hello_char_array : "  << (hello_str == hello_char_array) << std::endl;

	//Compare (1)
    //int compare( const basic_string& str ) const noexcept;(1)
	//Compares this string to str.
    /*
	std::string str1{"Hello"};
    std::string str2{"World"};
	
    std::cout << "str1 : " << str1 << std::endl;
	std::cout << "str2 : " << str2 << std::endl;
    std::cout << "str1.compare(str2) : " << str1.compare(str2) << std::endl; // negative
    std::cout << "str2.compare(str1) : " << str2.compare(str1) << std::endl; // positive
    */

	//Compare (2)
    //int compare( size_type pos1, size_type count1,const basic_string& str ) const; (2)
	//Compares a  substring  of this string(from pos1, going count1 positions) to str
    /*
	std::string str1 = "Hello";
    std::string str3{"Hello World"};
    std::cout << "Comparing 'World' to 'Hello' : " << str3.compare(6,5,str1) << std::endl;//1
    */

	//Compare (3)
    //int compare( const CharT* s ) const;(4)
	//Compares this string to the null-terminated character sequence beginning 
    //at the character pointed to by s.
    std::string str5{"Hello"};
    const char* message {"World"};
    std::cout << "Comparing Hello to World : " << str5.compare(message) << std::endl;//-1
    std::cout << "Comparing Hello to World : " << str5.compare("World") << std::endl; //-1


}

void other_operations(){

	//Replacing (1)
    //basic_string& replace( size_type pos, size_type count,const basic_string& str );
    //Replace the range [pos, pos + count] with str
	/*
	std::string str1 {"Finding Nemo"}; // Replace Finding with 'Searching For'
	std::string str1_2 {"Searcing For"};
	std::cout << "str1 : " << str1 << std::endl;
	
	std::cout << "Replacing..." << std::endl;
    str1.replace(0,7,str1_2);
	
    std::cout << "str1 : " << str1 << std::endl;
    */

   	//Replacing - (2)
    //basic_string& replace( size_type pos, size_type count,
                       //const basic_string& str,
                       //size_type pos2, size_type count2 = npos );
    /*                   
    //Replace in part of str, not its entirety
	std::string str2 {"Finding Nemo"};
    std::string str3 {"The Horse was Found in the Fields Searching For Food"};
	
	std::cout << "str2 : " << str2 << std::endl;
	
	std::cout << "Replacing..." << std::endl;
    str2.replace(0,7,str3,34,13);
	
    std::cout << "str2 : " << str2 << std::endl;
    */

    //Copying
    //size_type copy( CharT* dest,size_type count,size_type pos = 0)
	//Copy a subsection of *this string to dest. Dest is pre-allocated
	// The resulting character string is not null-terminated. Be careful
    /*
    std::string str4{"Climbing Kirimanjaro"};
    char txt4[15] {}; //Initialized with zero equivalent for characters which is '\0'
    std::cout << "std::size(txt4) : " << std::size(txt4) << std::endl;
    std::cout << "txt4 : " << txt4 << std::endl;
	
	std::cout << "Copying..." << std::endl;
    str4.copy(txt4,11,9);
	
	//Safe to print because the char array was initialized with '\0' s.
    std::cout << "txt4 : " << txt4 << std::endl;
    */


	//Resizing
    //std::resize(
    /*
    std::string str5{"Hello"};
	
    std::cout << "null char : " << '\0' << std::endl;
	std::cout << "str5 : " << str5 << std::endl;
    std::cout << "str5.size() : " << str5.size() << std::endl;
    std::cout << "str5.capacity() : " << str5.capacity() << std::endl;
	
	std::cout << "Resizing..." << std::endl;
    str5.resize(8); // This fills new char place holders with
						//null character by default, you can't print and see them
    
	std::cout << "str5 : " << str5 << std::endl;
    std::cout << "str5.size() : " << str5.size() << std::endl;
    std::cout << "str5.capacity() : " << str5.capacity() << std::endl;
	
	//Prove that they are indeed null characters
    std::cout << "Printing through loop : " << std::endl;
	for(size_t i{} ; i < str5.size() ; ++i){
		std::cout << i << ":" << str5[i] << std::endl;
	}


    //Resize and specify autofill character
    std::cout << "Resize and specify autofill character : " << std::endl;
    str5.resize(10,'*');
	std::cout << "str5 : " << str5 << std::endl;
    std::cout << "str5.size() : " << str5.size() << std::endl;
    std::cout << "str5.capacity() : " << str5.capacity() << std::endl;


    //Resize down
    std::cout << "Resize down : " << std::endl;
    str5.resize(5);
	std::cout << "str5 : " << str5 << std::endl;
    std::cout << "str5.size() : " << str5.size() << std::endl;
    std::cout << "str5.capacity() : " << str5.capacity() << std::endl;
    */


    //Swapping
	std::string str_a{"This is a string stored in A"};
    std::string str_b{"This is a string stored in B and it's really great to be able to do that."};
    
    //Before swap
    std::cout << "str_a : " << str_a << std::endl;
    std::cout << "str_b : " << str_b << std::endl;
	std::cout << "str_a.size() :" << str_a.size() << std::endl;
	std::cout << "str_a.capaity() : " << str_a.capacity() << std::endl;
	std::cout << "str_b.size() :" << str_b.size() << std::endl;
	std::cout << "str_b.capaity() : " << str_b.capacity() << std::endl;
    
	std::cout << "Swapping..." << std::endl;
    str_a.swap(str_b);
    
    //After swap
    std::cout << "str_a : " << str_a << std::endl;
    std::cout << "str_b : " << str_b << std::endl;
	std::cout << "str_a.size() :" << str_a.size() << std::endl;
	std::cout << "str_a.capaity() : " << str_a.capacity() << std::endl;
	std::cout << "str_b.size() :" << str_b.size() << std::endl;
	std::cout << "str_b.capaity() : " << str_b.capacity() << std::endl;
  
}

void searching(){

	//Find(1)
    //std::string::find()
    //size_type find( const basic_string& str, size_type pos = 0 ) const
    //Finds the starting index where the str substring is found in
	//the string where we call the method.
    /*
    std::string string1{"Water was poured in the heater"};
    std::string search_for{"ter"};
    
    size_t found_pos = string1.find(search_for);
    std::cout << "find('ter') : index [" << found_pos << "]" << std::endl;// index : 2
	
    //find red
    search_for = "red";
    found_pos = string1.find(search_for);
    std::cout << "find('red') : index [" << found_pos << "]" << std::endl;// 13

    //Find something that isn't there
    search_for = "chicken";
    found_pos = string1.find(search_for);
    std::cout << "find('chicken') : index ["<< found_pos << "]" << std::endl;//huge number

    //std::string::npos
    std::cout << "npos : " << std::string::npos << std::endl;

    size_t large = -1;
    std::cout << "large : " << large << std::endl;
    */



     //Using std::string::npos to check if search was successfull or failed
    /*
    std::string string1{"Water was poured in the heater"};
    std::string search_for{"red"};
    
    size_t found_pos = string1. find(search_for);
    if(found_pos == std::string::npos){
        std::cout << "Could not find the string 'red' : " << std::endl;
    }else{
        std::cout << "'red' found starting at position : " << found_pos << std::endl;
    }
	
	
	//Search for chicken and check result against std::string::npos
    search_for = "chicken";
    found_pos = string1.find(search_for);
    
    if(found_pos == std::string::npos){
        std::cout << "Could not find the string 'chicken'. " << std::endl;
    }else{
        std::cout << "'chicken' found starting at position : " << found_pos << std::endl;
    }
    */




	//Find(2)	
	//Can specify the position where we want the search to start
    //using the second parameter of the method
    /*
    std::string string1{"Water was poured in the heater"};
    std::string search_for{"ter"};

    size_t found_pos = string1.find(search_for); 
    std::cout << "ter found at position : " << found_pos << std::endl;
    
    found_pos = string1.find(search_for,0);
    std::cout << "ter found at position : " << found_pos << std::endl;
    
    found_pos = string1.find(search_for,10);
    std::cout << "ter found at position : " << found_pos << std::endl;
    */


	//Find(3)
	//size_type find( const CharT* s, size_type pos = 0 ) const;
	//Finds the first substring equal to the character string pointed to by s
	//pos : the position where we start searching in the std::string
	
	std::string string2 = "beer is packaged by her in beer cans around here.";
	const char * c_string2{"her"};
	
	size_t found_pos = string2.find(c_string2,2);
	if( found_pos!= std::string::npos){
		std::cout <<c_string2 <<  " found at position : " << found_pos << std::endl;
	}else{
        std::cout << "Could not find the string :  " << (c_string2) <<  std::endl;
	}
}

void transform(){

	//Number to String : the std::to_string function.
    /*
    float float_var {22.3f};
    double double_var {1.34847e5};
    int int_var {223};
    
    std::string float_str {std::to_string(float_var)};;
    std::string double_str{std::to_string(double_var)};;
    std::string int_str{std::to_string(int_var)};
    
    std::cout << "size of float_str : " << float_str.size()<< std::endl;
    std::cout << "float_var : " << float_var << std::endl;
	std::cout << "float_str : " << float_str<< std::endl;
	
    std::cout << "double_var : " << double_var << std::endl;
	std::cout <<"double_str : " << double_str<< std::endl;
	
    std::cout << "int_var : " << int_var << std::endl;
	std::cout << "int_str : " << int_str<< std::endl;

    */

   //std::string to number (integral types)
	//int, long , long long
	//std::stoi, std::stol, std::stoll
    /*
	std::string number_str{"34.567"};//Could even be negative

	int int_var = std::stoi(number_str);
	std::cout << "int_var : " << int_var << std::endl;
	std::cout << "sizeof(int_var) : " << sizeof(int_var) << std::endl;
	
	long long_var = std::stol(number_str);
	std::cout << "long_var : " << long_var << std::endl;
	std::cout << "sizeof(long_var) : " << sizeof(long_var) << std::endl;
	
	long long long_long_var = std::stoll(number_str);
	std::cout << "long_long_var : " << long_long_var << std::endl;
	std::cout << "sizeof(long_long_var) : " << sizeof(long_long_var) << std::endl;
    */

	//unsigned long , unsigned long long
	//std::stoul, std::stoull
	//Underflows when the std::string contains a negative number
	/*
	std::string number_str = "34.567";
	//std::string number_str = "-34.567"; // Resulting unsigned long and long long underflow
							// and become huge numbers of their type
	std::cout << std::endl;
	std::cout << "unsigned long, unsigned long long : " << std::endl;
	
	unsigned long u_l_var = std::stoul(number_str);
	std::cout << "u_l_var : " << u_l_var << std::endl;
	std::cout << "sizeof(u_l_var) : " << sizeof(u_l_var) << std::endl;
	
	unsigned long long u_ll_var = std::stoull(number_str);
	std::cout << "u_ll_var : " << u_ll_var << std::endl;
	std::cout << "sizeof(u_ll_var) : " << sizeof(u_ll_var) << std::endl;
    */

	//float, double,long double : 
	//std::stof, std::stod, std::stold
    std::string number_str = "34.567";

	float float_var = std::stof(number_str);
	std::cout << "float_var : " << float_var << std::endl;
	std::cout << "sizeof(float_var) : " << sizeof(float_var) << std::endl;
	
	double double_var = std::stod(number_str);
	std::cout << "double_var : " << double_var << std::endl;
	std::cout << "sizeof(double_var) : " << sizeof(double_var) << std::endl;
	
	long double long_double_var = std::stold(number_str);
	std::cout << "long_double_var : " << long_double_var << std::endl;
	std::cout << "sizeof(long_double_var) : " << sizeof(long_double_var) << std::endl;
}

void escaped_sequences(){

    /*
    for(size_t i{0} ; i  < 1000 ; ++i){
        std::cout << "Hello\n";
    }
    */

   /*
    std::cout << "He said \"Get out of here immediately!\"" << std::endl;
    */

   /*
    std::string todo_list{ "\tClean the house\n\tWalk the dog\n\tDo laundry\n\tPick groceries" };
    std::string windows_path{ "D:\\sandbox\\testProject\\hello.txt" };
    std::string linux_path{ "/home/username/files/hello.txt" };
    std::string hint{ " \"\\\\\" escapes a backslash character like \\." };

    std::cout << "todo_list : " << std::endl;
    std::cout << todo_list << std::endl;
    std::cout << "windows_path : " << windows_path << std::endl;
    std::cout << "linux_path : " << linux_path << std::endl;
    std::cout << "hint : " << hint << std::endl;
    */

   std::cout << "\a" << std::endl ;
}

void raw_string_literals(){
    /*
    //The bad way to do things
    std::string todo_list {"\tClean the house\n\tWalk the dog\n\tDo laundry\n\tpick groceries"};
    std::string windows_path {"D:\\sandbox\\testProject\\hello.txt"};
	std::string linux_path {"/home/username/files/hello.txt"};
    std::string hint {" \"\\\\\" escapes a backslash character like \\."};
	
	std::cout << "todo_list : " << std::endl;
	std::cout << todo_list << std::endl;
	std::cout << "windows_path : " << windows_path << std::endl;
	std::cout << "linux_path : " << linux_path << std::endl;
	std::cout << "hint : " << hint << std::endl;
    */

   /*
   //Use raw string literals
   std::string to_do_list {R"(  Clean the house
   Walk the dog
   Do laundry
   Pick groceries)"};

   std::cout << "to_do_list : " << std::endl;
   std::cout << to_do_list << std::endl;
   */

  /*
  //Raw string literals with assignments
  std::string to_do_list =   R"(
	Clean the house
	Walk the dog
	Do Laundry
	Pick groceries
    )";

   std::cout << "to_do_list : " << std::endl;
   std::cout << to_do_list << std::endl;
   */

  /*
  //Raw string literals with assignments
  const char* c_string {  R"(
	Clean the house
	Walk the dog
	Do Laundry
	Pick groceries
    )"} ;

   std::cout << "to_do_list : " << std::endl;
   std::cout << c_string << std::endl;
   */

    /*
    //Fixing other escaped strings
    std::string windows_path1 {R"(D:\sandbox\testProject\hello.txt)"};
	std::string linux_path1 {R"(/home/username/files/hello.txt)"};
    std::string hint1 {R"("\\" escapes a backslash character like \.)"};	
	
	std::cout << "windows_path1 : " << windows_path1 << std::endl;
	std::cout << "linux_path1 : " << linux_path1 << std::endl;
	std::cout << "hint1 : " << hint1 << std::endl;
    */

   //Problematic raw string literals
   std::string sentence {R"--(The message was "(Stay out of this!)")--"};

   std::cout << "sentence : " << sentence << std::endl;
}

void copies(){
    std::string message {"Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!vvHello world!Hello world!Hello world!Hello world!Hello world!"};
    std::string& message_copy{message};

    char * p1 = message.data();
    char * p2 = message_copy.data();

    std::cout << "&message[0] : " << (void*)p1 << std::endl;
    std::cout << "&message_copy[0] : " << (void*) p2 << std::endl;
}

void string_views(){

    //Showing the problem
    /*
    std::string string {"Hello"};
    std::string string1 {string}; // Copy
    std::string string2 {string}; // Copy
    
    std::cout  << "address of string : " <<  &string << std::endl;
    std::cout  << "address of string1 : " <<  &string1 << std::endl;
    std::cout  << "address of string2 : " <<  &string2 << std::endl;
    */


   //Using string_view
   /*
    std::string_view sv {"Hellooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo"};
    std::string_view sv1 {sv}; // View viewing the hello literal
    std::string_view sv2 {sv1}; // Another view viewing hello 
    
    std::cout << "Size of string_view : " << sizeof(std::string_view) << std::endl;
    std::cout << "size of sv1 : " << sizeof(sv1) << std::endl;
    
    std::cout << "sv : " << sv << std::endl;
    std::cout << "sv1 : " << sv1 << std::endl;
    std::cout << "sv2 : " << sv2 << std::endl;
    */


   //Constructing string_view's
   /*
    std::string string3 {"Regular std::string"};
    const char * c_string {"Regular C-String"};
    const char char_array[]{"Char array"}; // Null terminated
    char char_array2[]{'H','u','g','e'}; // Non null terminated char array

    std::string_view sv3{"String litteral"};
    std::string_view sv4{string3};
    std::string_view sv5{c_string};
    std::string_view sv6{char_array};
    std::string_view sv7{sv3}; 
    std::string_view sv8{char_array2,std::size(char_array2)};//Non null terminated char array
                                                             //Need to pass in size info
    std::cout << "sv3 : " << sv3 << std::endl;
    std::cout << "sv4 : " << sv4 << std::endl;
    std::cout << "sv5 : " << sv5 << std::endl;
    std::cout << "sv6 : " << sv6 << std::endl;
	std::cout << "sv7 (constructed from other string_view) : " << sv7 << std::endl;
    std::cout << "Non null terminated string with std::string_view : " << sv8 << std::endl;
    */

   //Changes to the original string are reflected in the string_view
   /*
    char word [] {"Dog"};
    std::string_view sv9{word};
    
    std::cout << "word : " << sv9 << std::endl;
    
	std::cout << "Changing data... " << std::endl;
    //Change the data
    word[2] = 't';
    
    std::cout << "word : " << sv9 << std::endl;
    */

   //Changing the view window : SHRINKING
   /*
    const char * c_string1 { "The animals have left the region" };
    std::string_view sv10{c_string1};
    
    std::cout << "sv10 : " << sv10 << std::endl;
    
    sv10.remove_prefix(4); // Removes "The"
    
	//Prints : animals have left the region
    std::cout << "View with removed prefix(4) : " << sv10 << std::endl;
    
    sv10.remove_suffix(10); // Removes "the region"
    
	//Prints : animals have left
    std::cout << "View with removed suffix(10) : " << sv10 << std::endl;
    
    //Changing the view doesn't change the viewed string : 
    std::cout << "Original sv10 viewed string : " << c_string1 << std::endl;
    */


   //String_view shouldn't outlive whatever it is viewing
   /*
    std::string_view sv11;
    
    {
        std::string string4{"Hello there"};
        sv11 = string4;
        std::cout << "INSIDE --- sv11 is viewing : " << sv11 << std::endl;
        
        
        //string4 goes out of scope here.
    }
    std::cout << "OUTSIDE --- sv1 is viewing : " << sv11 << std::endl;
    */


   //data
   /*
    std::string_view sv13 {"Ticket"};
    std::cout << "sv13 : " << sv13 << std::endl;
    std::cout << "std::strlen(sv13.data()) : " << std::strlen(sv13.data()) << std::endl;
    */


   //Don't use data() on a modified view (through remove_prefix or remove_suffix)
   /*
	std::string_view sv14 {"Ticket"};
    sv14.remove_prefix(2);
    sv14.remove_suffix(2);
    
    //Length info is lost when you modify the view
    std::cout << sv14 << " has " << std::strlen(sv14.data()) << " characters(s)" << std::endl;
    std::cout << "sv14.data() is " << sv14.data() << std::endl;
    std::cout << "sv14 is " << sv14 << std::endl;
    */


   //Don't view non null terminated strings
   /*
    char char_array3[] {'H','e','l','l','o'};
    std::string_view sv15 {char_array3,std::size(char_array3)};
    
    std::cout << sv15 << " has " << std::strlen(sv15.data()) << " characters(s)" << std::endl;
    std::cout <<"sv15.data is  : " <<  sv15.data() << std::endl;
    std::cout << "sv15 is : " << sv15 << std::endl;
    */


   //std::string behaviors
	std::string_view sv16{"There is a huge forest in that area"};
    
    std::cout << "sv16 is " << sv16.length() << " characters long" << std::endl;
    std::cout << "The front character is : " << sv16.front() << std::endl;
    std::cout << "The back character is : " << sv16.back() << std::endl;
    std::cout << "Substring : " << sv16.substr(0,22) << std::endl;
}

int main(){

	std::string full_name;//Empty string
    std::string planet {"Earth. Where the sky is blue"};//Initialize with string literal
	std::string prefered_planet{planet};//Initialize with other existing string
    std::string message {"Hello there",5};	//Initialize with part of a string literal.
											//Contains hello
    std::string weird_message(4,'e');//Initialize with multiple copies of a char
									 // contains eeee
    std::string greeting{"Hello World"};
    std::string saying_hello{ greeting,6,5};//Initialize with part of an existing std::string
											// starting at index 6, taking 5 characters.
											//Will contain World.

	std::cout << "full_name : " << full_name << std::endl;
	std::cout << "planet : " << planet << std::endl;
	std::cout << "prefered_planet : " << prefered_planet << std::endl;
	std::cout << "message : " << message << std::endl;
	std::cout << "weird_message : " << weird_message << std::endl;
	std::cout << "greeting : " << greeting << std::endl;
	std::cout << "saying_hello : " << saying_hello << std::endl;

    //Changing std::string at runtime
    planet = "Earth. Where the sky is blue Earth. Where the sky is blue Earth. Where ";
    std::cout << "planet : " << planet << std::endl;


    //Use a raw array
    const char * planet1 {"Earth. Where the sky is blue Earth."};
    planet1 = "Earth. Where the sky is blue Earth. Where the sky is blue Earth. Where ";
    std::cout << "planet1 : " << planet1 << std::endl;

}