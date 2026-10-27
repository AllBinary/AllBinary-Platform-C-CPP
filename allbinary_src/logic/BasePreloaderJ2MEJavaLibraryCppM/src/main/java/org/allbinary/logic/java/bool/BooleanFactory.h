
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANFACTORY_H
        #define ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BooleanFactory
            : public Object
         {

    private: static BooleanFactory* instance() { static std::unique_ptr<BooleanFactory> value(new BooleanFactory()); return value.get(); }

    public: static BooleanFactory* getInstance();

    public: bool TRUE = true;

    public: bool FALSE = false;

    public: const std::string TRUE_STRING = this->TRUE.toString();

    public: const std::string FALSE_STRING = this->FALSE.toString();

    public: const std::string YES = "yes";

    public: const std::string NO = "no";

    public: std::string toStringb(bool bool_);

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANFACTORY_H
