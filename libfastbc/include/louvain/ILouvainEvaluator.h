#ifndef FASTBC_LOUVAIN_ILOUVAINEVALUATOR_H
#define FASTBC_LOUVAIN_ILOUVAINEVALUATOR_H

#include <IGraph.h>
#include "ICommunity.h"

namespace fastbc {
	namespace louvain {

		template<typename V, typename W>
		class ILouvainEvaluator
		{
		public:

			/**
			 *	@brief Evaluate given graph to create vertices communities using Louvain algorithm
			 *
			 *	@param graph Graph to evaluate
			 *	@return std::vector<std::shared_ptr<ICommunity<V,W>>> Vertices communities computed from given graph
			 */
			virtual std::vector<std::shared_ptr<ICommunity<V,W>>> evaluateGraph(
				std::shared_ptr<const IGraph<V,W>> graph) = 0;
		};

	}
}

#endif