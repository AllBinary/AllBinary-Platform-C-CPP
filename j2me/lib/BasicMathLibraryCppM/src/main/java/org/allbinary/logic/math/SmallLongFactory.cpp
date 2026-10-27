
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Long.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SmallLongFactory
            : public Object
         {

    private: static SmallLongFactory* instance() { static std::unique_ptr<SmallLongFactory> value(new SmallLongFactory()); return value.get(); }

    public: static SmallLongFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SmallLongFactory::instance();
    
}


    public: const int32_t NEGATIVE_MAX = 500;

    public: const int32_t POSITIVE_MAX = 0x2D1;

    private: const std::vector<int64_t> INTEGER_ARRAY = std::vector<int64_t>(this->NEGATIVE_MAX +this->POSITIVE_MAX);

    private: const std::vector<std::string> STRING_ARRAY = std::vector<std::string>(this->NEGATIVE_MAX +this->POSITIVE_MAX);

    public: int32_t MIN = 0;

    public: int32_t lastMin = 0;

    public: int32_t lastNegativeMin = 0;

    public: void initWithRange(int32_t value, int32_t negativeValue){




                        for (
    int32_t index = value -1;index >= this->lastMin; index--)
        {
this->INTEGER_ARRAY[index +this->NEGATIVE_MAX]= int64_t(index);
    
}





                        for (
    int32_t index = negativeValue -1;index >= this->lastNegativeMin; index--)
        {
this->INTEGER_ARRAY[index]= int64_t( -index);
    
}


                        if(this->lastMin < value)
                        
                                    {
                                    this->lastMin= value;
    
this->MIN= value;
    

                                    }
                                

                        if(this->lastNegativeMin < negativeValue)
                        
                                    {
                                    this->lastNegativeMin= negativeValue;
    

                                    }
                                
}


    public: void init(){

                        if(this->INTEGER_ARRAY[0] == 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(this->lastMin < this->POSITIVE_MAX || this->lastNegativeMin < this->NEGATIVE_MAX)
                        
                                    {
                                    



                        for (
    int32_t index = this->POSITIVE_MAX -1;index >= this->lastMin; index--)
        {
this->INTEGER_ARRAY[index +this->NEGATIVE_MAX]= int64_t(index);
    
}





                        for (
    int32_t index = this->NEGATIVE_MAX -1;index >= this->lastNegativeMin; index--)
        {
this->INTEGER_ARRAY[index]= int64_t( -index);
    
}

this->lastMin= this->POSITIVE_MAX;
    
this->lastNegativeMin= this->NEGATIVE_MAX;
    

                                    }
                                

                                    }
                                
}


private: SmallLongFactory(){
}


    public: int64_t getInstanceNoThrow(int64_t index){

                        if(index +this->NEGATIVE_MAX > this->INTEGER_ARRAY.size() -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->INTEGER_ARRAY[ -1 +this->NEGATIVE_MAX];
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->INTEGER_ARRAY[(static_cast<int32_t>(index)) +this->NEGATIVE_MAX];
    
}


    public: std::string getString(int32_t index){

    int32_t i = index +this->NEGATIVE_MAX;;
    

                        if(this->STRING_ARRAY[i] == 
                                    nullptr
                                )
                        
                                    {
                                    this->STRING_ARRAY[i]= this->INTEGER_ARRAY[i].toString();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->STRING_ARRAY[i];
    
}


};

            

