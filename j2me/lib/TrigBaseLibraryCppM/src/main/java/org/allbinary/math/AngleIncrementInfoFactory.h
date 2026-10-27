
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AngleFactory;
class AngleIncrementInfo;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AngleIncrementInfoFactory
            : public virtual Object
         {

    private: static AngleIncrementInfoFactory* instance_owner();
    private: static AngleIncrementInfoFactory* instance;

    public: static AngleIncrementInfoFactory* getInstance();


            
    public: AngleIncrementInfoFactory();
        
    private: std::vector<AngleIncrementInfo*> angleIncrementInfo;

    public: AngleIncrementInfo* getAt(int16_t angleIncrement);

};

            


        #endif //ORG_ALLBINARY_MATH_ANGLEINCREMENTINFOFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MATH_ANGLEINCREMENTINFOFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MATH_ANGLEINCREMENTINFOFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif
#if __has_include("org/allbinary/math/AngleIncrementInfo.h")
#include "org/allbinary/math/AngleIncrementInfo.h"
#endif

        #endif
    
