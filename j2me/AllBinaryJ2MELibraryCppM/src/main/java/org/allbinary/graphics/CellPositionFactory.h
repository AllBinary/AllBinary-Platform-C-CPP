
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CELLPOSITIONFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_CELLPOSITIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class LogUtil;
class StringMaker;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CellPosition;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CellPositionFactory
            : public virtual Object
         {

    private: static CellPositionFactory* SINGLETON_owner();
    private: static CellPositionFactory* SINGLETON;

    public: static CellPositionFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    public: CellPosition* NONE;

    private: std::vector<std::vector<CellPosition*>> cellPositionArray;

    private: int32_t columns= 0;

    private: int32_t rows= 0;

private: CellPositionFactory();

    public: void init(int32_t columns, int32_t rows);

    public: CellPosition* getInstanceColRow(int32_t i_column, int32_t i_row);

    public: CellPosition* createInstance(int32_t i_column, int32_t i_row);

    public: int32_t getColumns();

    public: int32_t getRows();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CELLPOSITIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_CELLPOSITIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_CELLPOSITIONFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/graphics/CellPosition.h")
#include "org/allbinary/graphics/CellPosition.h"
#endif

        #endif
    
