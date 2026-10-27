
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
        



        #ifndef ORG_ALLBINARY_GAME_GD_RESOURCE_GDRESOURCES_H
        #define ORG_ALLBINARY_GAME_GD_RESOURCE_GDRESOURCES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GDResources
            : public virtual Object
         {

    private: static GDResources* instance_owner();
    private: static GDResources* instance;

    public: static GDResources* getInstance();


            
    public: GDResources();
        
    public: std::vector<std::string> resourceStringArray;

    public: int32_t currentLayoutRequiredTotal= 0;

};

            


        #endif //ORG_ALLBINARY_GAME_GD_RESOURCE_GDRESOURCES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_GD_RESOURCE_GDRESOURCES_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_GD_RESOURCE_GDRESOURCES_H_COMPLETE
        
        #endif
    
