#include "Headers/Processor.hpp"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <input_file> <cycle_count>" << std::endl;
        return 1;
    }

    const string Filename = argv[1];
    int cyclecount = std::stoi(argv[2]);  // debug
    Processor processor(true); 
    
    processor.loadProgram(Filename.c_str());
    processor.run(cyclecount);
    outputStageandCycles(Filename,processor.is_forwarded);
    return 0;
}