
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_CHARACTER_CHARARRAYFACTORY_H
        #define ORG_ALLBINARY_LOGIC_JAVA_CHARACTER_CHARARRAYFACTORY_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CharArrayFactory
            : public Object
         {

    private: static CharArrayFactory instance() { return CharArrayFactory(); }

    public: static CharArrayFactory getInstance();

    private: const std::vector<char> zeroCharArray = std::vector<char>(0);

    public: std::vector<char> getZeroCharArray();

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_CHARACTER_CHARARRAYFACTORY_H
