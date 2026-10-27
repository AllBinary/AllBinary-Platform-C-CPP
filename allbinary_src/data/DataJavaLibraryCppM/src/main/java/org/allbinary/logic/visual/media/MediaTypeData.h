
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIATYPEDATA_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIATYPEDATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MediaTypeData
            : public virtual Object
         {

    private: static MediaTypeData* instance_owner();
    private: static MediaTypeData* instance;

    public: static MediaTypeData* getInstance();

private: MediaTypeData();

    public: const std::string RESIZABLE_MEDIA = "RESIZABLE_MEDIA";

    public: const std::string NOT_RESIZABLE_MEDIA = "NOT_RESIZABLE_MEDIA";

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIATYPEDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIATYPEDATA_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIATYPEDATA_H_COMPLETE
        
        #endif
    
