//===----------------------------------------------------------------------===//
//                         DuckDB
//
// planner/operator/logical_window.hpp
//
//
//===----------------------------------------------------------------------===//

#pragma once

#include "planner/logical_operator.hpp"

namespace duckdb {

//! LogicalAggregate represents an aggregate operation with (optional) GROUP BY
//! operator.
class LogicalWindow : public LogicalOperator {
public:
	LogicalWindow(size_t window_index) : LogicalOperator(LogicalOperatorType::WINDOW), window_index(window_index) {
	}

	vector<string> GetNames() override;

	size_t window_index;
protected:
	void ResolveTypes() override;
};
} // namespace duckdb
