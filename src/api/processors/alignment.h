#pragma once

#include "base.h"

namespace weserv::api::processors {

class Alignment : ImageProcessor {
 public:
    Alignment(std::shared_ptr<parsers::Query> query, const Config &config)
        : ImageProcessor(std::move(query)), config_(config) {}

    VImage process(const VImage &image) const override;

 private:
    /**
     * Global config.
     */
    const Config &config_;
};

}  // namespace weserv::api::processors
