
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
        
class EntryData
            : public Object
         {
        

    private: static const instance: EntryData = new EntryData();

    public static EntryData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EntryData.instance;
    
}


private constructor (){

            super();
        }


    public const ID: string = "ENTRY_ID";

    public const ENCRYPTION: string = "ENTRY_ENCRYPTION";

    public const TIMECREATED: string = "ENTRY_TIMECREATED";

    public const LASTMODIFIED: string = "ENTRY_LASTMODIFIED";

    public const DEFAULT: string = "ENTRY_DEFAULT";

    public const SPECIAL: string = "ENTRY_SPECIAL";

    public const ENABLE: string = "ENTRY_ENABLE";

    public const YES: string = "Yes";

    public const NO: string = "No";

};

            

