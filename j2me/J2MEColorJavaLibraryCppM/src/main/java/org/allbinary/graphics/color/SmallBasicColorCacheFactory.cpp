
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
        



            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicColor.h"
#include "BasicColorFactory.h"

class SmallBasicColorCacheFactory
            : public Object
         {
        

    private: static const instance: SmallBasicColorCacheFactory = new SmallBasicColorCacheFactory();

    public static SmallBasicColorCacheFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SmallBasicColorCacheFactory.instance;
    
}


    private: const SIZE: int32_t = 255;

    private: const INDEX_TO_COLOR: std::vector<int32_t> = new Array(this.SIZE);

    private: const BASIC_COLOR_ARRAY: std::vector<BasicColor> = new Array(this.SIZE);

    private: colorIndex: int32_t = 0;

private constructor (){

            super();
        }


    public add(BasicColor basicDefaultColor){
this.BASIC_COLOR_ARRAY[this.colorIndex]= basicDefaultColor;
    
this.INDEX_TO_COLOR[this.colorIndex]= basicDefaultColor!.intValue();
    
this.colorIndex++;
    
}


    public BasicColor getAndOrCreate(int32_t colorAsInt){

    basicColor: BasicColor;;
    




                        for (
    index: int32_t = 0;index < this.SIZE; index++)
        {

                        if(this.INDEX_TO_COLOR[index] == colorAsInt)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.BASIC_COLOR_ARRAY[index]!;
    

                                    }
                                
}


    ALPHA_MASK: int32_t = static_cast<int32_t>(0xFF000000);;
    
basicColor= BasicColorFactory.getInstance()!.createInstanceAN(colorAsInt&ALPHA_MASK, colorAsInt&0x00FFFFFF, StringUtil.getInstance()!.EMPTY_STRING);
    
this.add(basicColor);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return basicColor;
    
}


};

            

