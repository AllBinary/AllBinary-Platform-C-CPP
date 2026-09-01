
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
        



















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DbInitInfo.h"

class LogDbInitInfo: public DbInitInfo {

    private: static const std::string INITFILE = "logdbinitdata.dat";

public: LogDbInitInfo(){
            super(INITFILE, true);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public: LogDbInitInfo(bool read){
            super(INITFILE, read);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


};

            

