
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
        
class CharacterSetData
            : public Object
         {

    private: static CharacterSetData instance() { return CharacterSetData(); }

    public: static CharacterSetData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CharacterSetData::instance();
    
}


private: CharacterSetData(){
}


    public: const std::string US_ASCII = "US-ASCII";

    public: const std::string ISO_8859_1 = "ISO-8859-1";

    public: const std::string UTF_8 = "UTF-8";

    public: const std::string UTF_16 = "UTF-16";

    public: const std::string UTF_16BE = "UTF-16BE";

    public: const std::string UTF_16LE = "UTF-16LE";

};

            

