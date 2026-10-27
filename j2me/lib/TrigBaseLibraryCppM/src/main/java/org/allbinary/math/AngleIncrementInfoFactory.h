
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
        



        #ifndef ORG_ALLBINARY_MATH_ANGLEINCREMENTINFOFACTORY_H
        #define ORG_ALLBINARY_MATH_ANGLEINCREMENTINFOFACTORY_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleIncrementInfo.h"

class AngleIncrementInfoFactory
            : public Object
         {

    private: static AngleIncrementInfoFactory* instance() { static std::unique_ptr<AngleIncrementInfoFactory> value(new AngleIncrementInfoFactory()); return value.get(); }

    public: static AngleIncrementInfoFactory* getInstance();

    private: const std::vector<AngleIncrementInfo*> angleIncrementInfo = std::vector<AngleIncrementInfo*>(static_cast<int32_t>(AngleFactory::getInstance()->TOTAL_ANGLE));

    public: AngleIncrementInfo* getAt(int16_t angleIncrement);

};

            


        #endif //ORG_ALLBINARY_MATH_ANGLEINCREMENTINFOFACTORY_H
