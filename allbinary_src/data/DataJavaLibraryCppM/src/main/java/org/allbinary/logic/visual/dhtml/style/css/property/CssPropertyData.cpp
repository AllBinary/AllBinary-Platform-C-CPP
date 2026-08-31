
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CssPropertyData
            : public Object
         {
        

    private: static const instance: CssPropertyData = new CssPropertyData();

    public static CssPropertyData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CssPropertyData.instance;
    
}


private constructor (){

            super();
        }


    public const NAME: string = "CSS_PROPERTY_NAME";

    public const VALUES: string = "CSS_PROPERTY_VALUES";

};

            

