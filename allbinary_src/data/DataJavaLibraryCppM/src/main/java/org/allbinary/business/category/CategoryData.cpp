
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
        
#include <org/allbinary/logic/io/file/CommonDataFileStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CategoryData
            : public Object
         {
        

    private: static const instance: CategoryData = new CategoryData();

    public static CategoryData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CategoryData.instance;
    
}


private constructor (){

            super();
        }


    public const PARENT: string = "CATEGORY_PARENT";

    public const NAME: string = "CATEGORY_NAME";

    public const PATH: string = "CATEGORY_PATH";

    public const LABEL: string = "CATEGORY_LABEL";

    public const VIEW: string = "CATEGORY_VIEW_CATEGORY";

    public const LEVEL: string = "CATEGORY_LEVEL";

    public const REQUEST: string = "request";

    public const ROOTCATEGORY: string = "Category";

    public const UNCRYPTED_EXTENSION: string = CommonDataFileStrings.getInstance()!.UNCRYPTED_EXTENSION;

    public const ENCRYPTED_EXTENSION: string = CommonDataFileStrings.getInstance()!.ENCRYPTED_EXTENSION;

};

            

