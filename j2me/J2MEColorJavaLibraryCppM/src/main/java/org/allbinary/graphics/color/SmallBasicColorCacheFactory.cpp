
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
        
            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicColor.h"
#include "BasicColorFactory.h"

class SmallBasicColorCacheFactory
            : public Object
         {

    private: static SmallBasicColorCacheFactory instance() { return SmallBasicColorCacheFactory(); }

    public: static SmallBasicColorCacheFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SmallBasicColorCacheFactory::instance();
    
}


    private: const int32_t SIZE = 255;

    private: const std::vector<int32_t> INDEX_TO_COLOR = new Array(this->SIZE);

    private: const std::vector<BasicColor> BASIC_COLOR_ARRAY = new Array(this->SIZE);

    private: int32_t colorIndex = 0;

private: SmallBasicColorCacheFactory(){
}


    public: void add(BasicColor basicDefaultColor){
this->BASIC_COLOR_ARRAY[this->colorIndex]= basicDefaultColor;
    
this->INDEX_TO_COLOR[this->colorIndex]= basicDefaultColor.intValue();
    
this->colorIndex++;
    
}


    public: BasicColor getAndOrCreate(int32_t colorAsInt){

    BasicColor basicColor;;
    




                        for (
    int32_t index = 0;index < this->SIZE; index++)
        {

                        if(this->INDEX_TO_COLOR[index] == colorAsInt)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->BASIC_COLOR_ARRAY[index]!;
    

                                    }
                                
}


    int32_t ALPHA_MASK = static_cast<int32_t>(0xFF000000);;
    
basicColor= BasicColorFactory::getInstance().createInstanceAN(colorAsInt&ALPHA_MASK, colorAsInt&0x00FFFFFF, StringUtil::getInstance().EMPTY_STRING);
    
this->add(basicColor);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return basicColor;
    
}


};

            

