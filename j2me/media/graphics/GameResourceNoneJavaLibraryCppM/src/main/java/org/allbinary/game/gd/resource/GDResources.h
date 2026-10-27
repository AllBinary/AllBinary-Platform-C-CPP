
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GDResources
            : public Object
         {

    private: static GDResources* instance() { static std::unique_ptr<GDResources> value(new GDResources()); return value.get(); }

    public: static GDResources* getInstance();

    public: const std::vector<std::string> resourceStringArray = 
                                                        {
                                                            
                                                        };

    public: int32_t currentLayoutRequiredTotal= 0;

};

            


        #endif //ORG_ALLBINARY_GAME_GD_RESOURCE_GDRESOURCES_H
