
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellType.h"

class GeographicMapCellTypeFactory
            : public Object
         {
        

    private: static const instance: GeographicMapCellTypeFactory = new GeographicMapCellTypeFactory();

    public static GeographicMapCellTypeFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GeographicMapCellTypeFactory.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const geographicMapCellTypeArray: std::vector<GeographicMapCellType> = new Array(512);

    public GeographicMapCellType get(int32_t type){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellTypeArray[type]!;
    
}


    public std::vector<GeographicMapCellType> getGeographicMapCellTypeArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellTypeArray;
    
}


    public int32_t getStartType(){



                            throw new RuntimeException();
                    
}


    public int32_t getEndType(){



                            throw new RuntimeException();
                    
}


    public int32_t getEmptyType(){



                            throw new RuntimeException();
                    
}


    public bool isPath(GeographicMapCellType cellType){



                            throw new RuntimeException();
                    
}


};

            

