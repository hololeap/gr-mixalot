#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <gnuradio/types.h>
#include <gnuradio/io_signature.h>
#include <itpp/comm/bch.h>
#include <iostream>
#include <sstream>
#include <vector>

using boost::shared_ptr;
using itpp::bvec;
namespace gr {
    namespace mixalot {
        shared_ptr<itpp::bvec> get_vec(const std::string binstr);
        void make_numeric_message(const std::string message, std::vector<uint32_t> &msgwords);
        void make_alpha_message(const std::string message, std::vector<uint32_t> &msgwords);
        uint32_t encodeword(uint32_t dw);
        void uint32_to_bvec(uint32_t d, bvec &bv, int nbits = 32);
        uint32_t bvec_to_uint32(const bvec &bv);
        unsigned char even_parity(uint32_t x);
    }
}

