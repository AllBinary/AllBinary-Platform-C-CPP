
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellPositionBaseFactory.h"
#include "BasicGeographicMapCellPositionFactory.h"
#include "BasicGeographicMap.h"

class GeographicMapCellPositionFactory: public GeographicMapCellPositionBaseFactory {

    private: static const Hashtable<any, any> hashtable = Hashtable<any, any>();

    public: static Hashtable<any, any> getHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GeographicMapCellPositionFactory::hashtable;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: BasicGeographicMapCellPositionFactory getInstance(BasicGeographicMap geographicMapInterface){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

    AllBinaryTiledLayer allBinaryTiledLayer = geographicMapInterface.getAllBinaryTiledLayer();;
    

    Object* geographicMapCellPositionFactoryCanBeNull = GeographicMapCellPositionFactory::hashtable.get(allBinaryTiledLayer.getDataId());;
    

                        if(geographicMapCellPositionFactoryCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    this->logUtil.putF(StringMaker().append("Creating GeographicMapCellPositionFactory for TileLayer: ").appendint(allBinaryTiledLayer.getDataId().intValue()).toString(), this, commonStrings.GET_INSTANCE);
    
geographicMapCellPositionFactoryCanBeNull= BasicGeographicMapCellPositionFactory(geographicMapInterface);
    
GeographicMapCellPositionFactory::hashtable.put(allBinaryTiledLayer.getDataId(), geographicMapCellPositionFactoryCanBeNull);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapCellPositionFactoryCanBeNull as BasicGeographicMapCellPositionFactory;
    

                                    }
                                
                        else {
                            this->logUtil.putF(StringMaker().append("Reusing GeographicMapCellPositionFactory for TileLayer: ").appendint(allBinaryTiledLayer.getDataId().intValue()).toString(), this, commonStrings.GET_INSTANCE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapCellPositionFactoryCanBeNull as BasicGeographicMapCellPositionFactory;
    

                        }
                            
}


};

            

