
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MultiPlayerGameFeatureFactory
            : public virtual Object
         {

    private: static MultiPlayerGameFeatureFactory* instance_owner();
    private: static MultiPlayerGameFeatureFactory* instance;

    public: static MultiPlayerGameFeatureFactory* getInstance();

private: MultiPlayerGameFeatureFactory();

    public: void addCommands(Object* anyType);
    public: void addCommands(const std::string& anyType) { return addCommands(JavaString::box(anyType)); }

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_H_COMPLETE
        
        #endif
    
