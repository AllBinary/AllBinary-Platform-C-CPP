
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CharacterSetData
            : public virtual Object
         {

    private: static CharacterSetData* instance_owner();
    private: static CharacterSetData* instance;

    public: static CharacterSetData* getInstance();

private: CharacterSetData();

    public: const std::string US_ASCII = "US-ASCII";

    public: const std::string ISO_8859_1 = "ISO-8859-1";

    public: const std::string UTF_8 = "UTF-8";

    public: const std::string UTF_16 = "UTF-16";

    public: const std::string UTF_16BE = "UTF-16BE";

    public: const std::string UTF_16LE = "UTF-16LE";

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_CHARACTERS_CHARACTERSETDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_JAVA_CHARACTERS_CHARACTERSETDATA_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_JAVA_CHARACTERS_CHARACTERSETDATA_H_COMPLETE
        
        #endif
    
