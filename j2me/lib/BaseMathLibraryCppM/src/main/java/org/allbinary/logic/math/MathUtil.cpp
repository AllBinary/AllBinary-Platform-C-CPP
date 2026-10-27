
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MathUtil
            : public Object
         {

    private: static MathUtil* instance() { static std::unique_ptr<MathUtil> value(new MathUtil()); return value.get(); }

    public: static MathUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MathUtil::instance();
    
}


    public: int32_t getTotalDigits(int32_t digits){

    int32_t total = 0;;
    

        while(digits > 0)
        {
digits= digits /10;
    
total++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return total;
    
}


    public: int32_t sqrt(int32_t value){

                        if(value <= 1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return value;
    

                                    }
                                

    int32_t accumulated = value>>1;;
    

    int32_t result = (accumulated +(value /accumulated))>>1;;
    

        do
        {
accumulated= result;
    
result= (accumulated +(value /accumulated))>>1;
    
}

        while(accumulated > result)
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return accumulated;
    
}


    private: const int32_t ACCURACY = 100;

    public: double sqrtd(int32_t x){

                        if(x == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0.0;
    

                                    }
                                

                        if(x < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1.0;
    

                                    }
                                

    double result = x;;
    




                        for (
    int32_t index = 0;index < this->ACCURACY; index++)
        {
result= (result +(x /result)) /2;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


    public: int32_t abs(int32_t value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (value < 0)
                        ?       
                                 -value
                                :

                            value;

    ;
    
}


    public: int64_t abslong(int64_t value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (value < 0)
                        ?       
                                 -value
                                :

                            value;

    ;
    
}


    public: int32_t min(int32_t value, int32_t value2){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (value <= value2)
                        ?       
                                value
                                :

                            value2;

    ;
    
}


    public: int32_t max(int32_t value, int32_t value2){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (value >= value2)
                        ?       
                                value
                                :

                            value2;

    ;
    
}


};

            

