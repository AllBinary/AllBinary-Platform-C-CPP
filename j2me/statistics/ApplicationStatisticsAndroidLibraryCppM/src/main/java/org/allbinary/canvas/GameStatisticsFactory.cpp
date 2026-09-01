
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
        



#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AndroidGameStatistics.h"
//ActualPlatform
/*actual*/ class GameStatisticsFactory: public AndroidGameStatistics {

    private: static const AndroidGameStatistics SINGLETON = GameStatisticsFactory();

    /*actual*/ public: static AndroidGameStatistics getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameStatisticsFactory::SINGLETON;
    
}


    private: StringMaker stringBuffer = StringMaker();

    public: void add(std::string string){

                        if(this->stringBuffer.length() > 12000)
                        
                                    {
                                    this->stringBuffer.delete(0, this->stringBuffer.length());
    
this->stringBuffer.append("Old Stats Cleared");
    

                                    }
                                
this->stringBuffer.append(string);
    
}


    /*actual*/ public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringMaker().append(super.toString()).append(this->stringBuffer.toString()).toString();;
    
}


};

            

