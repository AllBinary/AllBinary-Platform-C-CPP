
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_BASICGAMEINFOFACTORY_H
        #define ORG_ALLBINARY_GAME_BASICGAMEINFOFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicGameInfoFactory
            : public virtual Object
         {

    private: static BasicGameInfoFactory* SINGLETON_owner();
    private: static BasicGameInfoFactory* SINGLETON;

    public: static BasicGameInfoFactory* getInstance();

    public: int32_t currentReleaseIndex= 0;

    public: int32_t currentDestroyIndex= 0;

    public: int32_t total= 0;

private: BasicGameInfoFactory();

    public: void init(int32_t total);

    public: bool isPeaked();

    public: int32_t howManyLeft();

};

            


        #endif //ORG_ALLBINARY_GAME_BASICGAMEINFOFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_BASICGAMEINFOFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_BASICGAMEINFOFACTORY_H_COMPLETE
        
        #endif
    
