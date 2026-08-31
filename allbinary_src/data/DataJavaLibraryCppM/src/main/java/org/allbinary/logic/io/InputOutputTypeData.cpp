
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InputOutputTypeData
            : public Object
         {
        

    private: static const instance: InputOutputTypeData = new InputOutputTypeData();

    public static InputOutputTypeData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputOutputTypeData.instance;
    
}


private constructor (){

            super();
        }


    public const NAME: string = "INPUT_OUTPUT_TYPE_NAME";

    public const FILE: string = "INPUT_OUTPUT_TYPE_FILE";

    public const RESPONSE: string = "INPUT_OUTPUT_TYPE_RESPONSE";

    public const DB: string = "INPUT_OUTPUT_TYPE_DB";

    public const JSP: string = "jsp";

    public const JSP_FRAGMENT: string = "jspf";

    public const PHP: string = "php";

    public const ASP: string = "asp";

    public const PL: string = "pl";

    public const DEFAULT: string = this.JSP;

    public const DEFAULT_FRAGMENT: string = this.JSP_FRAGMENT;

};

            

