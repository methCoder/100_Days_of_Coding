// Printing 0-100 numbers and only 20 digits per row.
// Language: C++
// Using For Loop:
// **************************************    
for(int i = 1; i < 101; i++){
     std::cout << i << " ";
     if(i % 20 == 0)
     {
        std::cout << '\n';
     }
}

// Using While loop:
// ****************************************
    int count = 1;
    while(count < 101)
    {
        std::cout << count << " ";
        
        if( count % 20 == 0 )
        {
            std::cout << '\n';
        }
        count++;
    }
    
// Using do-while loop:
//******************************************

    int count = 1;
    do
    {
        std::cout << count << " ";
        
        if(count % 20 == 0)
        {
            std::cout << '\n';        
        }
        
        count++;
    }
    while(count < 101);
