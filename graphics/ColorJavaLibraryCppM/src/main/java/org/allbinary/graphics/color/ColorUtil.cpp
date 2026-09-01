
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        
            #include "../../../../java/lang/Math.h"
        
#include <java/awt.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Color.h"

class ColorUtil
            : public Object
         {

    private: static ColorUtil instance() { return ColorUtil(); }

    public: static ColorUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ColorUtil::instance();
    
}


    public: bool isGreyishOrWhiteLike(Color color){

                        if(Math::abs(color.getRed() -color.getGreen()) > 20 || Math::abs(color.getRed() -color.getBlue()) > 20 || Math::abs(color.getGreen() -color.getBlue()) > 20)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: bool isDark(Color color){

                        if(color.getRed() < 0x77 && color.getRed() < 0x77 && color.getRed() < 0x77)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

