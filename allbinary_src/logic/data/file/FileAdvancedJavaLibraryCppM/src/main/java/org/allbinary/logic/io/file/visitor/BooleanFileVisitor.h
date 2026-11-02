
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_VISITOR_BOOLEANFILEVISITOR_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_VISITOR_BOOLEANFILEVISITOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class PreLogUtil;
class AbFile;
#include <org/allbinary/logic/util/visitor/VisitorInterface.h>
class CommonStrings;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BooleanFileVisitor
            : public virtual Object
        , public VisitorInterface {

    /*protected*/ public: CommonStrings* commonStrings;

    private: BasicArrayList* filterStringBasicArrayList;

public: BooleanFileVisitor(BasicArrayList* filterStringBasicArrayList);

    public: Object* visit(Object* anyType);
    public: Object* visit(const std::string& anyType) { return visit(JavaString::box(anyType)); }

    public: bool visit(AbFile* file);

    public: BasicArrayList* getFilterStringBasicArrayList();

    public: void setFilterStringBasicArrayList(BasicArrayList* filterStringBasicArrayList);

    public: bool visit(AbFile* file, std::string fileNameString);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_VISITOR_BOOLEANFILEVISITOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_FILE_VISITOR_BOOLEANFILEVISITOR_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_FILE_VISITOR_BOOLEANFILEVISITOR_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/util/visitor/VisitorInterface.h>)
#include <org/allbinary/logic/util/visitor/VisitorInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

        #endif
    
