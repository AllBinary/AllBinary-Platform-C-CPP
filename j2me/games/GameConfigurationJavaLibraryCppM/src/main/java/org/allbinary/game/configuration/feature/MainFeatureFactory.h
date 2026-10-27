
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MAINFEATUREFACTORY_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MAINFEATUREFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/feature/Feature.h"

class MainFeatureFactory
            : public Object
         {

    private: static MainFeatureFactory* instance() { static std::unique_ptr<MainFeatureFactory> value(new MainFeatureFactory()); return value.get(); }

    public: static MainFeatureFactory* getInstance();

    public: Feature* FULL_SCREEN = new Feature("Full Screen");

    public: Feature* TITLE_BAR = new Feature("Title Bar");

    public: Feature* STATIC = new Feature("Static Dependent Feature");

    public: Feature* LOAD_ONDEMAND = new Feature("Load OnDemand");

    public: Feature* LOAD_ALL = new Feature("Load All");

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MAINFEATUREFACTORY_H
