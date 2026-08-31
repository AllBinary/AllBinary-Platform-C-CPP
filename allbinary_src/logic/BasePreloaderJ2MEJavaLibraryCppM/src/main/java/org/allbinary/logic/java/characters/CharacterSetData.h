
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_CHARACTERS_CHARACTERSETDATA_H
        #define ORG_ALLBINARY_LOGIC_JAVA_CHARACTERS_CHARACTERSETDATA_H

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CharacterSetData
            : public Object
         {
        

    private: static const instance: CharacterSetData = new CharacterSetData();

    public static CharacterSetData getInstance();

private constructor ();

    public const US_ASCII: string = "US-ASCII";

    public const ISO_8859_1: string = "ISO-8859-1";

    public const UTF_8: string = "UTF-8";

    public const UTF_16: string = "UTF-16";

    public const UTF_16BE: string = "UTF-16BE";

    public const UTF_16LE: string = "UTF-16LE";

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_CHARACTERS_CHARACTERSETDATA_H
