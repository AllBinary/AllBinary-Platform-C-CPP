
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
        



            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ThemeData
            : public Object
         {
        

    private: static const instance: ThemeData = new ThemeData();

    public static ThemeData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ThemeData.instance;
    
}


private constructor (){

            super();
        }


    public const NAME: string = "THEME_NAME";

    public const PATH: string = "THEME_PATH";

    public const PREVIEW_IMAGE_NAME: string = "THEME_PREVIEW_IMAGE_NAME";

    public const PREVIEW_IMAGE_PATH: string = "THEME_PREVIEW_IMAGE_PATH";

};

            

