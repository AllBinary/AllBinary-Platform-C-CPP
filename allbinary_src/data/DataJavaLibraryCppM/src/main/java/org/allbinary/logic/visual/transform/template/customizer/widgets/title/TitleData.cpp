
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
        



            #include "../../../../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TitleData
            : public Object
         {
        

    private: static const instance: TitleData = new TitleData();

    public static TitleData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TitleData.instance;
    
}


private constructor (){

            super();
        }


    public const NAME: string = "TITLE_NAME";

    public const TEXT: string = "TITLE_TEXT";

    public const VIEWNAMEKEY: string = "Title";

    public const MAXLEN: int32_t = 255;

};

            

