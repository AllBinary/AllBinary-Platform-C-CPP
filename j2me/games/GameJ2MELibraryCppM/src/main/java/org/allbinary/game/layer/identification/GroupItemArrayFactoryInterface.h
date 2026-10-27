
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_IDENTIFICATION_GROUPITEMARRAYFACTORYINTERFACE_H
        #define ORG_ALLBINARY_GAME_LAYER_IDENTIFICATION_GROUPITEMARRAYFACTORYINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Group;
class ABCustomItem;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GroupItemArrayFactoryInterface
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: virtual std::vector<ABCustomItem*> getInstance(Group* groupInterface) = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_IDENTIFICATION_GROUPITEMARRAYFACTORYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_IDENTIFICATION_GROUPITEMARRAYFACTORYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_IDENTIFICATION_GROUPITEMARRAYFACTORYINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/game/identification/Group.h>)
#include <org/allbinary/game/identification/Group.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABCustomItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomItem.h>
#endif

        #endif
    
