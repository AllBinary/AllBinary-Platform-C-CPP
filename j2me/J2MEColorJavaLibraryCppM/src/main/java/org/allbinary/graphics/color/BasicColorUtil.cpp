
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicColor.h"

class BasicColorUtil
            : public Object
         {

    private: static BasicColorUtil instance() { return BasicColorUtil(); }

    public: static BasicColorUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicColorUtil::instance();
    
}


    public: const std::vector<BasicColor> ZERO_ARRAY = {};

    public: const int32_t ALPHA = static_cast<int32_t>(0xFF000000);

    public: const bool isAlpha = true;

    public: const bool ffOpaque = true;

    public: int32_t getRGB(int32_t red, int32_t green, int32_t blue){

    int32_t value = 0;;
    

                        if(this->isAlpha)
                        
                                    {
                                    
                        if(this->ffOpaque)
                        
                                    {
                                    value= this->ALPHA;
    

                                    }
                                

                                    }
                                
value= (red<<16) | value;
    
value= (green<<8) | value;
    
value= blue | value;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return value;
    
}


    public: int32_t getARGB(int32_t alphaValue, int32_t r, int32_t g, int32_t b){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ((alphaValue<<24)&this->ALPHA) +((r<<16)&0x00FF0000) +((g<<8)&0x0000FF00) +(b&0x000000FF);
    
}


    public: int32_t get(int32_t alphaValue, int32_t color){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ((alphaValue<<24)&this->ALPHA) +color;
    
}


    public: int32_t invert(int32_t color){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (0xFFFFFF -color) | this->ALPHA;
    
}


};

            

