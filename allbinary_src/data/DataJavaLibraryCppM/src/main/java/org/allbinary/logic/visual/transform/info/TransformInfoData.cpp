
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
        



            #include "../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformInfoData
            : public Object
         {
        

    private: static const instance: TransformInfoData = new TransformInfoData();

    public static TransformInfoData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformInfoData.instance;
    
}


private constructor (){

            super();
        }


    public const PARENT: string = "TRANSFORM_INFO_PARENT";

    public const MAPPED: string = "TRANSFORM_INFO_MAPPED";

    public const NAME: string = "TRANSFORM_INFO_NAME";

    public const DESCRIPTION: string = "TRANSFORM_INFO_DESCRIPTION";

    public const CATEGORY: string = "TRANSFORM_INFO_CATEGORY";

    public const OBJECTFILENAME: string = "TRANSFORM_INFO_OBJECTFILENAME";

    public const OBJECT: string = "TRANSFORM_INFO_OBJECT";

    public const OBJECTCONFIGFILENAME: string = "TRANSFORM_INFO_OBJECTCONFIGFILENAME";

    public const OBJECTCONFIG: string = "TRANSFORM_INFO_OBJECTCONFIG";

    public const TEMPLATEFILENAME: string = "TRANSFORM_INFO_TEMPLATEFILENAME";

    public const TEMPLATE: string = "TRANSFORM_INFO_TEMPLATE";

    public const DATAFILENAME: string = "TRANSFORM_INFO_DATAFILENAME";

    public const DATA: string = "TRANSFORM_INFO_DATA";

    public const LABEL: string = "TRANSFORM_INFO_LABEL";

    public const OWNER: string = "OWNER_" +this.NAME;

    public const PARTIAL: string = "PARTIAL_" +this.NAME;

};

            

