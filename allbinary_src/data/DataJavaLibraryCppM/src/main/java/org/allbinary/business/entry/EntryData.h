
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ENTRY_ENTRYDATA_H
        #define ORG_ALLBINARY_BUSINESS_ENTRY_ENTRYDATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class EntryData
            : public virtual Object
         {

    private: static EntryData* instance_owner();
    private: static EntryData* instance;

    public: static EntryData* getInstance();

private: EntryData();

    public: const std::string ID = "ENTRY_ID";

    public: const std::string ENCRYPTION = "ENTRY_ENCRYPTION";

    public: const std::string TIMECREATED = "ENTRY_TIMECREATED";

    public: const std::string LASTMODIFIED = "ENTRY_LASTMODIFIED";

    public: const std::string DEFAULT = "ENTRY_DEFAULT";

    public: const std::string SPECIAL = "ENTRY_SPECIAL";

    public: const std::string ENABLE = "ENTRY_ENABLE";

    public: const std::string YES = "Yes";

    public: const std::string NO = "No";

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ENTRY_ENTRYDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_ENTRY_ENTRYDATA_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_ENTRY_ENTRYDATA_H_COMPLETE
        
        #endif
    
