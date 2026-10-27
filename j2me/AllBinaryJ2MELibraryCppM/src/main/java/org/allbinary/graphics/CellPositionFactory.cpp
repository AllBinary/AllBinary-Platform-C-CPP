
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CELLPOSITIONFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_CELLPOSITIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/CellPositionFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/CellPosition.h"

auto CellPositionFactory::SINGLETON_owner() -> CellPositionFactory* { static std::unique_ptr<CellPositionFactory> value(new CellPositionFactory()); return value.get(); }
CellPositionFactory* CellPositionFactory::SINGLETON = CellPositionFactory::SINGLETON_owner();

    auto CellPositionFactory::getInstance() -> CellPositionFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CellPositionFactory::SINGLETON;
    
}


CellPositionFactory::CellPositionFactory() : logUtil(LogUtil::getInstance()), NONE(new CellPosition( -1,  -1,  -1,  -1)), cellPositionArray(std::vector<std::vector<CellPosition*>>(0, std::vector<CellPosition*>(0))){
}


    auto CellPositionFactory::init(int32_t columns, int32_t rows) -> void{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Init: columns: ");
    
stringBuffer->appendint(columns);
    
stringBuffer->append(" rows: ");
    
stringBuffer->appendint(rows);
    
this->logUtil->putF(stringBuffer->toString(), this, commonStrings->INIT);
    
this->cellPositionArray= std::vector<std::vector<CellPosition*>>(columns, std::vector<CellPosition*>(rows));
    
this->columns= columns;
    
this->rows= rows;
    




                        for (
    int32_t column = 0;column < columns; column++)
        {




                        for (
    int32_t row = 0;row < rows; row++)
        {
this->createInstance(column, row);
    
}

}

}


    auto CellPositionFactory::getInstanceColRow(int32_t i_column, int32_t i_row) -> CellPosition*{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cellPositionArray[i_column][i_row];
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put((new StringMaker())->append("columns: ")->appendint(this->getColumns())->append(" rows: ")->appendint(this->getRows())->append(" col: ")->appendint(i_column)->append(" row: ")->appendint(i_row)->toString(), this, commonStrings->GET_INSTANCE, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NONE;
    
}

}


    auto CellPositionFactory::createInstance(int32_t i_column, int32_t i_row) -> CellPosition*{

    CellPosition* cellPositionCanBeNull = this->cellPositionArray[i_column][i_row];;
    

                        if(cellPositionCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    cellPositionCanBeNull= new CellPosition(i_column, i_row, this->columns, this->rows);
    
this->cellPositionArray[i_column][i_row]= cellPositionCanBeNull;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return cellPositionCanBeNull;
    
}


    auto CellPositionFactory::getColumns() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->columns;
    
}


    auto CellPositionFactory::getRows() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rows;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_CELLPOSITIONFACTORY_CPP
